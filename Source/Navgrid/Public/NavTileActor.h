#pragma once

#include "GameFramework/Actor.h"

#include "NavTileActor.generated.h"

class UNavTileComponent;
/**
* A simple actor with a NavTileComponent and a static mesh
*/
UCLASS()
class NAVGRID_API ANavTileActor : public AActor
{
	GENERATED_BODY()

public:

	ANavTileActor(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components")
	TObjectPtr<USceneComponent> SceneComponent;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components")
	TObjectPtr<UNavTileComponent> NavTileComponent;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Mesh;

};