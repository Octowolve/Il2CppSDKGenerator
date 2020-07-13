#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonRadar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonRadar"));
	}

	template <typename T = int32_t> static T& SIDE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RADIUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& vertices() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& triangles() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& meshFilter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mesh() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Upper() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_DataList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& pi() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVertices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadians() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Apply() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UICommonRadar*))(Il2CppBase() + 0x39CACA4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UICommonRadar*))(Il2CppBase() + 0x39CB330))(this);
	}
	template <typename T = void> T SetBound() {
		return ((T (*)(UICommonRadar*))(Il2CppBase() + 0x39CB3D4))(this);
	}
	template <typename T = void> T SetData(Il2CppList<int32_t>* dataList) {
		return ((T (*)(UICommonRadar*, Il2CppList<int32_t>*))(Il2CppBase() + 0x39CB644))(this, dataList);
	}
	template <typename T = void> T CreateMesh() {
		return ((T (*)(UICommonRadar*))(Il2CppBase() + 0x39CAD58))(this);
	}
	template <typename T = void> T SetVertices() {
		return ((T (*)(UICommonRadar*))(Il2CppBase() + 0x39CAE88))(this);
	}
	template <typename T = float> T GetRadians(float angle) {
		return ((T (*)(UICommonRadar*, float))(Il2CppBase() + 0x39CB73C))(this, angle);
	}
	template <typename T = void> T Apply() {
		return ((T (*)(UICommonRadar*))(Il2CppBase() + 0x39CB200))(this);
	}

};

}
