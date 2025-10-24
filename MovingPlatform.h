	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	//UE�Ƀ����o�[�������t���[�g��o�^���G�f�B�^���ŕ\������
	float MemberFloat = 10.0f;

	UPROPERTY(EditAnywhere)
	int MemberInt = 5;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(11.2f, 3.4f, 6.5f);
	
};
