#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAISpecialMoveBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAISpecialMoveBehavior"));
	}

	template <typename T = uintptr_t> T& specialMoveType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& startPoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& endPoint() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& arrivalTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init(Il2CppVector3 startPoint, Il2CppVector3 endPoint, float arrivalTime) {
		return ((T (*)(NetworkAISpecialMoveBehavior*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3E9CDE8))(this, startPoint, endPoint, arrivalTime);
	}

};

}
