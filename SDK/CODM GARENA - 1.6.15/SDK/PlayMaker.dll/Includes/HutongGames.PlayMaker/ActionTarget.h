#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class ActionTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "ActionTarget"));
	}

	template <typename T = uintptr_t> T& objectType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& fieldName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& allowPrefabs() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(ActionTarget*))(Il2CppBase() + 0x2EEB870))(this);
	}
	template <typename T = Il2CppString*> T get_FieldName() {
		return ((T (*)(ActionTarget*))(Il2CppBase() + 0x2EEB878))(this);
	}
	template <typename T = bool> T get_AllowPrefabs() {
		return ((T (*)(ActionTarget*))(Il2CppBase() + 0x2EEB880))(this);
	}
	template <typename T = bool> T IsSameAs(uintptr_t actionTarget) {
		return ((T (*)(ActionTarget*, uintptr_t))(Il2CppBase() + 0x2EEB8B8))(this, actionTarget);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ActionTarget*))(Il2CppBase() + 0x2EEB9AC))(this);
	}

};

}
