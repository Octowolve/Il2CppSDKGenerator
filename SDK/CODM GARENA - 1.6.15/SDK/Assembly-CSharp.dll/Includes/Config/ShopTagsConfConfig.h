#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ShopTagsConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ShopTagsConfConfig"));
	}

	template <typename T = int32_t> T& TagID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& Open() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& TagType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& EnableSubTag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RejectSubTag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x28);
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
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E0000))(this);
	}
	template <typename T = int32_t> T get_TagID() {
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E00A0))(this);
	}
	template <typename T = void> T set_TagID(int32_t value) {
		return ((T (*)(ShopTagsConfConfig*, int32_t))(Il2CppBase() + 0x30E00A8))(this, value);
	}
	template <typename T = bool> T get_Open() {
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E00B0))(this);
	}
	template <typename T = void> T set_Open(bool value) {
		return ((T (*)(ShopTagsConfConfig*, bool))(Il2CppBase() + 0x30E00B8))(this, value);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E00C0))(this);
	}
	template <typename T = void> T set_Priority(int32_t value) {
		return ((T (*)(ShopTagsConfConfig*, int32_t))(Il2CppBase() + 0x30E00C8))(this, value);
	}
	template <typename T = int32_t> T get_TagType() {
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E00D0))(this);
	}
	template <typename T = void> T set_TagType(int32_t value) {
		return ((T (*)(ShopTagsConfConfig*, int32_t))(Il2CppBase() + 0x30E00D8))(this, value);
	}
	template <typename T = bool> T get_EnableSubTag() {
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E00E0))(this);
	}
	template <typename T = void> T set_EnableSubTag(bool value) {
		return ((T (*)(ShopTagsConfConfig*, bool))(Il2CppBase() + 0x30E00E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RejectSubTag() {
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E00F0))(this);
	}
	template <typename T = void> T set_RejectSubTag(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ShopTagsConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30E00F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E0100))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(ShopTagsConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E0108))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E0110))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ShopTagsConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E0118))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ShopTagsConfConfig*))(Il2CppBase() + 0x30E0120))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ShopTagsConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E0130))(this, bytes, position);
	}

};

}
