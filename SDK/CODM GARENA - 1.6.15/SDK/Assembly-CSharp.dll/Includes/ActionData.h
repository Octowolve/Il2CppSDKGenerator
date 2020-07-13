#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionData"));
	}

	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ActionName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_action() {
		return ((T (*)(ActionData*))(Il2CppBase() + 0x37088FC))(this);
	}
	template <typename T = void> T set_action(uintptr_t value) {
		return ((T (*)(ActionData*, uintptr_t))(Il2CppBase() + 0x3708904))(this, value);
	}

};

}
