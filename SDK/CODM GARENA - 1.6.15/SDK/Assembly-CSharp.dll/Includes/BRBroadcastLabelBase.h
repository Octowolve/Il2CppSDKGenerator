#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRBroadcastLabelBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRBroadcastLabelBase"));
	}

	template <typename T = uintptr_t> T& LabelRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLabelWdith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Show(uint32_t key, Il2CppArray<uintptr_t>* Params) {
		return ((T (*)(BRBroadcastLabelBase*, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35C411C))(this, key, Params);
	}
	template <typename T = int32_t> T GetLabelWdith() {
		return ((T (*)(BRBroadcastLabelBase*))(Il2CppBase() + 0x35C4F98))(this);
	}

};

}
