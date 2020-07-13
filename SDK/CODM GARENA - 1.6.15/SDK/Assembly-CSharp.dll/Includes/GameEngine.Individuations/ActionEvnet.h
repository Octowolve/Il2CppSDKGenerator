#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class ActionEvnet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "ActionEvnet"));
	}

	template <typename T = Il2CppString*> T& actionName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& curEvent() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Event() {
		return ((T (*)(ActionEvnet*))(Il2CppBase() + 0x37042CC))(this);
	}
	template <typename T = Il2CppString*> T get_str() {
		return ((T (*)(ActionEvnet*))(Il2CppBase() + 0x37042D4))(this);
	}
	template <typename T = Il2CppString*> T get_action() {
		return ((T (*)(ActionEvnet*))(Il2CppBase() + 0x37042DC))(this);
	}
	template <typename T = void> T set_action(Il2CppString* value) {
		return ((T (*)(ActionEvnet*, Il2CppString*))(Il2CppBase() + 0x37042E4))(this, value);
	}

};

}
