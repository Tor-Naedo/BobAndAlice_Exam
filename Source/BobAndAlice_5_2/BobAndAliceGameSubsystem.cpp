#include "BobAndAliceGameSubsystem.h"

void UBobAndAliceGameSubsystem::Initialize(
    FSubsystemCollectionBase &Collection) {
  Super::Initialize(Collection);
}

void UBobAndAliceGameSubsystem::Deinitialize() { Super::Deinitialize(); }

void UBobAndAliceGameSubsystem::SaveTimerToSubSystem(const float TimeLimit)
{
    LocalTimer = TimeLimit;
}

float UBobAndAliceGameSubsystem::GetLocalSavedTimer() const
{
    return LocalTimer;
}

void UBobAndAliceGameSubsystem::SavePackageCollectedToSubSystem(const bool PackageCollected)
{
    LocalPackageCollected = PackageCollected;
}

bool UBobAndAliceGameSubsystem::GetLocalPackageCollected() const
{
    return LocalPackageCollected;
}
