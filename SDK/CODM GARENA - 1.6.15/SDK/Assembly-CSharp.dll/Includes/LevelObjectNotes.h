#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelObjectNotes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelObjectNotes"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& notes() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainsNote() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T ContainsNote(Il2CppString* note) {
		return ((T (*)(LevelObjectNotes*, Il2CppString*))(Il2CppBase() + 0x49330B8))(this, note);
	}
	template <typename T = bool> T xLuaBaseProxy_ContainsNote(Il2CppString* P0) {
		return ((T (*)(LevelObjectNotes*, Il2CppString*))(Il2CppBase() + 0x49331A8))(this, P0);
	}

};

}
