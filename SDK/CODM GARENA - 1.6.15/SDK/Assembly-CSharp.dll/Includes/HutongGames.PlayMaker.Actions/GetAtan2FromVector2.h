#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAtan2FromVector2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAtan2FromVector2"));
	}

	template <typename T = uintptr_t> T& vector2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& RadToDeg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAtan2FromVector2*))(Il2CppBase() + 0x5085440))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAtan2FromVector2*))(Il2CppBase() + 0x5085474))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetAtan2FromVector2*))(Il2CppBase() + 0x50855DC))(this);
	}
	template <typename T = void> T DoATan() {
		return ((T (*)(GetAtan2FromVector2*))(Il2CppBase() + 0x50854A0))(this);
	}

};

}
