#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetTouchCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetTouchCount"));
	}

	template <typename T = uintptr_t> T& storeCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetTouchCount*))(Il2CppBase() + 0x4EFFF48))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetTouchCount*))(Il2CppBase() + 0x4EFFF58))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetTouchCount*))(Il2CppBase() + 0x4F00050))(this);
	}
	template <typename T = void> T DoGetTouchCount() {
		return ((T (*)(GetTouchCount*))(Il2CppBase() + 0x4EFFF84))(this);
	}

};

}
