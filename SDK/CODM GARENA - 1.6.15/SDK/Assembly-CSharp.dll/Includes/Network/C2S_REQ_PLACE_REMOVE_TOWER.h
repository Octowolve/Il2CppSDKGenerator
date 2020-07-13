#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SREQPLACEREMOVETOWER
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_REQ_PLACE_REMOVE_TOWER"));
	}

	template <typename T = int16_t> T& GridId() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = int16_t> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(C2SREQPLACEREMOVETOWER*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x50457AC))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x50458D8))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Serialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(C2SREQPLACEREMOVETOWER*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5045988))(this, P0, P1);
	}

};

}
