#pragma once

#include "GameFramework/GameStateBase.h"

#include "GenericTeamAgentInterface.h"
#include "TurnManager.h"

#include "NavGridGameState.generated.h"

class ANavGrid;
class AGridPawn;
class UNavTileComponent;

/**
 *
 */
UCLASS()
class NAVGRID_API ANavGridGameState : public AGameStateBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "NavGrid")
	virtual ANavGrid* GetNavGrid();

	template <class T>
	T* GetNavGrid() { return Cast<T>(GetNavGrid()); }

	UFUNCTION(BlueprintCallable, Category = "NavGrid")
	virtual ATurnManager* GetTurnManager();

	template <class T>
	T* GetTurnManager() { return Cast<T>(GetTurnManager()); }

	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnPawnEnterTile, AGridPawn*, UNavTileComponent*);
	FOnPawnEnterTile& OnPawnEnterTile() { return PawnEnterTileDelegate; }

protected:

	/* spawn the default turn manager object, override this if you need to modify it */
	virtual ATurnManager* SpawnTurnManager();

	/* spawn the default navgrid object, override this if you need to modify it */
	virtual ANavGrid* SpawnNavGrid();

	UPROPERTY()
	TObjectPtr<ANavGrid> Grid;

	UPROPERTY()
	TObjectPtr<ATurnManager> TurnManager;

private:

	FOnPawnEnterTile PawnEnterTileDelegate;

};
