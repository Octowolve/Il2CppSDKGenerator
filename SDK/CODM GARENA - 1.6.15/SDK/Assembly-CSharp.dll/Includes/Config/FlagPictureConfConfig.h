#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class FlagPictureConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "FlagPictureConfConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LocID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LocID_AchDesc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Flag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& AI() {
		return *(T*)((uintptr_t)this + 0x2C);
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
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644B58))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644BF8))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(FlagPictureConfConfig*, int32_t))(Il2CppBase() + 0x4644C00))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644C08))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(FlagPictureConfConfig*, int32_t))(Il2CppBase() + 0x4644C10))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocID_Name() {
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644C18))(this);
	}
	template <typename T = void> T set_LocID_Name(Il2CppString* value) {
		return ((T (*)(FlagPictureConfConfig*, Il2CppString*))(Il2CppBase() + 0x4644C20))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocID_AchDesc() {
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644C28))(this);
	}
	template <typename T = void> T set_LocID_AchDesc(Il2CppString* value) {
		return ((T (*)(FlagPictureConfConfig*, Il2CppString*))(Il2CppBase() + 0x4644C30))(this, value);
	}
	template <typename T = Il2CppString*> T get_Url() {
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644C38))(this);
	}
	template <typename T = void> T set_Url(Il2CppString* value) {
		return ((T (*)(FlagPictureConfConfig*, Il2CppString*))(Il2CppBase() + 0x4644C40))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644C48))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(FlagPictureConfConfig*, Il2CppString*))(Il2CppBase() + 0x4644C50))(this, value);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644C58))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(FlagPictureConfConfig*, int32_t))(Il2CppBase() + 0x4644C60))(this, value);
	}
	template <typename T = int32_t> T get_Flag() {
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644C68))(this);
	}
	template <typename T = void> T set_Flag(int32_t value) {
		return ((T (*)(FlagPictureConfConfig*, int32_t))(Il2CppBase() + 0x4644C70))(this, value);
	}
	template <typename T = bool> T get_AI() {
		return ((T (*)(FlagPictureConfConfig*))(Il2CppBase() + 0x4644C78))(this);
	}
	template <typename T = void> T set_AI(bool value) {
		return ((T (*)(FlagPictureConfConfig*, bool))(Il2CppBase() + 0x4644C80))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(FlagPictureConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4644C88))(this, bytes, position);
	}

};

}
