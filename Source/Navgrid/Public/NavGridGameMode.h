#pragma once

#include "GameFramework/GameModeBase.h"

#include "NavGridGameMode.generated.h"

/**
 *
 */
UCLASS()
class NAVGRID_API ANavGridGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	ANavGridGameMode();

	virtual void BeginPlay() override;

};
