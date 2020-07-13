#pragma once
#include <Il2Cpp/Il2Cpp.h>

class meshUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "meshUtil"));
	}

	template <typename T = uintptr_t> static T& m_instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMeshTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRandomPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T getInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x41CEDA8))(0);
	}
	template <typename T = void> T init() {
		return ((T (*)(meshUtil*))(Il2CppBase() + 0x41CEF88))(this);
	}
	template <typename T = uintptr_t> T CreateMeshTest(Il2CppString* name, float width, float height) {
		return ((T (*)(meshUtil*, Il2CppString*, float, float))(Il2CppBase() + 0x41CF050))(this, name, width, height);
	}
	template <typename T = uintptr_t> T CreateRandomPlane(Il2CppString* name, float width, float height, int32_t nRow, int32_t nCol, float uScale, float vScale, bool isAddRandom, bool isGenNormal) {
		return ((T (*)(meshUtil*, Il2CppString*, float, float, int32_t, int32_t, float, float, bool, bool))(Il2CppBase() + 0x41CF518))(this, name, width, height, nRow, nCol, uScale, vScale, isAddRandom, isGenNormal);
	}

};

}
