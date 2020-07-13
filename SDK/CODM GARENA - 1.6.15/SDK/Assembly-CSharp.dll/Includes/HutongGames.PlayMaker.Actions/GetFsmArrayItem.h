#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetFsmArrayItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetFsmArrayItem"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& variableName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& index() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& storeValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetFsmArrayItem*))(Il2CppBase() + 0x508973C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetFsmArrayItem*))(Il2CppBase() + 0x508980C))(this);
	}
	template <typename T = void> T DoGetFsmArray() {
		return ((T (*)(GetFsmArrayItem*))(Il2CppBase() + 0x5089838))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetFsmArrayItem*))(Il2CppBase() + 0x5089AFC))(this);
	}

};

}
