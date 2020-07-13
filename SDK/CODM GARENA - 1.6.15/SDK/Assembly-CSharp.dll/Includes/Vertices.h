#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Vertices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Vertices"));
	}

	template <typename T = Il2CppList<Il2CppVector3>*> T& verts() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& uv1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& uv2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& uv3() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& uv4() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& normals() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tangents() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& boneWeights() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AssignTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T CreateList(Il2CppArray<uintptr_t>* aSource) {
		return ((T (*)(Vertices*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x21D32F4))(this, aSource);
	}
	template <typename T = void> T Copy(uintptr_t aDest, Il2CppList<uintptr_t>* aSource, int32_t aIndex) {
		return ((T (*)(Vertices*, uintptr_t, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x1E88384))(this, aDest, aSource, aIndex);
	}
	template <typename T = int32_t> T Add(uintptr_t aOther, int32_t aIndex) {
		return ((T (*)(Vertices*, uintptr_t, int32_t))(Il2CppBase() + 0x41CE3A4))(this, aOther, aIndex);
	}
	template <typename T = void> T AssignTo(uintptr_t aTarget) {
		return ((T (*)(Vertices*, uintptr_t))(Il2CppBase() + 0x41CE5F0))(this, aTarget);
	}

};

}
