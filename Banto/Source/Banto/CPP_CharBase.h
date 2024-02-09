// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_CharBase.generated.h"

UCLASS()
class BANTO_API ACPP_CharBase : public ACharacter
{
	GENERATED_BODY()
//�ϐ�
public:
	//�߂�����m�F���邽��
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Default)
	bool IsFlipping = false;
	//������Y���W���擾����
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Default)
	float MainYPos = 0.0f;
	//�G��Y���W���擾����
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Default)
	float EnemyYPos = 0.0f;
	//1F���擾
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Default)
	float OneFrame = 0.0f;
private:
	//�p�x�v�Z�p�̐���
	const float AngleCalcNum = 360.0f;
public:
	// Sets default values for this character's properties
	ACPP_CharBase();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//���W����p�x������o���֐�
	UFUNCTION(BlueprintCallable, Category = CPP_And_Blueprint)
	float FromPointToPointToAngle(float x, float y);
};
