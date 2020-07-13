#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MissileParameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MissileParameter"));
	}

	template <typename T = uintptr_t> T& controllableType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& initialSpeed() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& launchSpeed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& autoLaunchTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& initialMaxAngle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& initialControlAngle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& launchControlAngle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& lifeSpan() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& explosionLifeSpan() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& initialControlScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& launchControlScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& flightAssetID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& explosionAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MissileNumOfEachTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}


};

}
