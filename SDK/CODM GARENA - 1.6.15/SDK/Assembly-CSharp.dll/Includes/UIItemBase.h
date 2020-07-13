#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIItemBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIItemBase"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recovery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t root, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(UIItemBase*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F4FF54))(this, root, args);
	}
	template <typename T = void> T Despawn() {
		return ((T (*)(UIItemBase*))(Il2CppBase() + 0x2F50014))(this);
	}
	template <typename T = void> T Recovery() {
		return ((T (*)(UIItemBase*))(Il2CppBase() + 0x2F50254))(this);
	}

};

}
