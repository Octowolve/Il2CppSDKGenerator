#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendTutorialEventAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendTutorialEventAction"));
	}

	template <typename T = Il2CppString*> T& eventTypeName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SendTutorialEventAction*))(Il2CppBase() + 0x3C07704))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(SendTutorialEventAction*))(Il2CppBase() + 0x3C078A8))(this);
	}

};

}
