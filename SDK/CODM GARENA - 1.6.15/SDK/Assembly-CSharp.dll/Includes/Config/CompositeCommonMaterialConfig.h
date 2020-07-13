#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CompositeCommonMaterialConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CompositeCommonMaterialConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Itemid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T GetCommonList(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x462D37C))(0, id);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(CompositeCommonMaterialConfig*))(Il2CppBase() + 0x462D50C))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(CompositeCommonMaterialConfig*, int32_t))(Il2CppBase() + 0x462D514))(this, value);
	}
	template <typename T = int32_t> T get_Itemid() {
		return ((T (*)(CompositeCommonMaterialConfig*))(Il2CppBase() + 0x462D51C))(this);
	}
	template <typename T = void> T set_Itemid(int32_t value) {
		return ((T (*)(CompositeCommonMaterialConfig*, int32_t))(Il2CppBase() + 0x462D524))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CompositeCommonMaterialConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462D52C))(this, bytes, position);
	}

};

}
