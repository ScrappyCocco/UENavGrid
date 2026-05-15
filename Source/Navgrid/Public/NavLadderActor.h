#pragma once

#include "GameFramework/Actor.h"

#include "NavLadderActor.generated.h"

class UNavLadderComponent;

UCLASS()
class NAVGRID_API ANavLadderActor : public AActor
{
	GENERATED_BODY()

public:

	ANavLadderActor(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components")
	TObjectPtr<USceneComponent> SceneComponent;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components")
	TObjectPtr<UNavLadderComponent> NavLadderComponent;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Mesh;

};