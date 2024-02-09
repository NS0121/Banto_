// Fill out your copyright notice in the Description page of Project Settings.
#include "CPP_CharBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
// Sets default values
ACPP_CharBase::ACPP_CharBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void ACPP_CharBase::BeginPlay()
{
	Super::BeginPlay();
	
}
// Called every frame
void ACPP_CharBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	OneFrame = DeltaTime;
}
// Called to bind functionality to input
void ACPP_CharBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
//�X�e�B�b�N�̍��W����p�x������o��
float ACPP_CharBase::FromPointToPointToAngle(float x, float y)
{
	//���W�����Ɋp�x���擾�ix�̑�����/y�̑�����=�����x�j
	float Angle = UKismetMathLibrary::DegAtan2(y, x);

	//���W��y����������Ƃ��ēǂݎ���Ă���B���̂��߁A180���ȍ~��-180�A-179�A-178...�Ɛ��l���ω����Ă����B
	//�擾�����X�e�B�b�N�̍��W�����Ɋp�x�����߂Ă���
		if (!(Angle < 0))
		{
			return Angle;
		}
		else
		{
			return Angle + AngleCalcNum;
		}
}