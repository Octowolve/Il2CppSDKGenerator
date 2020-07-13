#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPoolBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPoolBase"));
	}

	template <typename T = uintptr_t> T& Template() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Recovery() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T Spawn(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(UIPoolBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x33934A8))(this, args);
	}
	template <typename T = void> T Despawn(uintptr_t item) {
		return ((T (*)(UIPoolBase*, uintptr_t))(Il2CppBase() + 0x2F50128))(this, item);
	}
	template <typename T = uintptr_t> T GetItem() {
		return ((T (*)(UIPoolBase*))(Il2CppBase() + 0x2F80738))(this);
	}

};

}
