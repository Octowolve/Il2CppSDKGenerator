#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ShopSubTagsConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ShopSubTagsConfConfig"));
	}

	template <typename T = int32_t> T& TagSubID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& Open() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ShopSubTagsConfConfig*))(Il2CppBase() + 0x30DFC5C))(this);
	}
	template <typename T = int32_t> T get_TagSubID() {
		return ((T (*)(ShopSubTagsConfConfig*))(Il2CppBase() + 0x30DFCFC))(this);
	}
	template <typename T = void> T set_TagSubID(int32_t value) {
		return ((T (*)(ShopSubTagsConfConfig*, int32_t))(Il2CppBase() + 0x30DFD04))(this, value);
	}
	template <typename T = bool> T get_Open() {
		return ((T (*)(ShopSubTagsConfConfig*))(Il2CppBase() + 0x30DFD0C))(this);
	}
	template <typename T = void> T set_Open(bool value) {
		return ((T (*)(ShopSubTagsConfConfig*, bool))(Il2CppBase() + 0x30DFD14))(this, value);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(ShopSubTagsConfConfig*))(Il2CppBase() + 0x30DFD1C))(this);
	}
	template <typename T = void> T set_Priority(int32_t value) {
		return ((T (*)(ShopSubTagsConfConfig*, int32_t))(Il2CppBase() + 0x30DFD24))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(ShopSubTagsConfConfig*))(Il2CppBase() + 0x30DFD2C))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(ShopSubTagsConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DFD34))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ShopSubTagsConfConfig*))(Il2CppBase() + 0x30DFD3C))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ShopSubTagsConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DFD44))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ShopSubTagsConfConfig*))(Il2CppBase() + 0x30DFD4C))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ShopSubTagsConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DFD5C))(this, bytes, position);
	}

};

}
