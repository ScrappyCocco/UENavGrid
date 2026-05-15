#pragma once

#include "GridPawn.h"

#include "ExampleGridPawn.generated.h"

class UStaticMeshComponent;

/*
**
* A simple pawn used for demonstrating the NavGrid plugin.
*/
UCLASS()
class NAVGRID_API AExampleGridPawn : public AGridPawn
{
	GENERATED_BODY()

public:

	AExampleGridPawn();

	/* Just a cone so we can see the pawn */
	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> StaticMesh = nullptr;
};