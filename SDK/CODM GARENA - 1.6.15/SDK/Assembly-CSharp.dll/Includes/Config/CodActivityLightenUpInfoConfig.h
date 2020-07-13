#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CodActivityLightenUpInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CodActivityLightenUpInfoConfig"));
	}

	template <typename T = int32_t> T& Seq_ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& RoleID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& AcionID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& TitleDesc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LinesDesc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& IconName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0x24);
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
		return ((T (*)(CodActivityLightenUpInfoConfig*))(Il2CppBase() + 0x2D5E7E4))(this);
	}
	template <typename T = int32_t> T get_Seq_ID() {
		return ((T (*)(CodActivityLightenUpInfoConfig*))(Il2CppBase() + 0x2D5E884))(this);
	}
	template <typename T = void> T set_Seq_ID(int32_t value) {
		return ((T (*)(CodActivityLightenUpInfoConfig*, int32_t))(Il2CppBase() + 0x2D5E88C))(this, value);
	}
	template <typename T = uint32_t> T get_RoleID() {
		return ((T (*)(CodActivityLightenUpInfoConfig*))(Il2CppBase() + 0x2D5E894))(this);
	}
	template <typename T = void> T set_RoleID(uint32_t value) {
		return ((T (*)(CodActivityLightenUpInfoConfig*, uint32_t))(Il2CppBase() + 0x2D5E89C))(this, value);
	}
	template <typename T = uint32_t> T get_AcionID() {
		return ((T (*)(CodActivityLightenUpInfoConfig*))(Il2CppBase() + 0x2D5E8A4))(this);
	}
	template <typename T = void> T set_AcionID(uint32_t value) {
		return ((T (*)(CodActivityLightenUpInfoConfig*, uint32_t))(Il2CppBase() + 0x2D5E8AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_TitleDesc() {
		return ((T (*)(CodActivityLightenUpInfoConfig*))(Il2CppBase() + 0x2D5E8B4))(this);
	}
	template <typename T = void> T set_TitleDesc(Il2CppString* value) {
		return ((T (*)(CodActivityLightenUpInfoConfig*, Il2CppString*))(Il2CppBase() + 0x2D5E8BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LinesDesc() {
		return ((T (*)(CodActivityLightenUpInfoConfig*))(Il2CppBase() + 0x2D5E8C4))(this);
	}
	template <typename T = void> T set_LinesDesc(Il2CppString* value) {
		return ((T (*)(CodActivityLightenUpInfoConfig*, Il2CppString*))(Il2CppBase() + 0x2D5E8CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_IconName() {
		return ((T (*)(CodActivityLightenUpInfoConfig*))(Il2CppBase() + 0x2D5E8D4))(this);
	}
	template <typename T = void> T set_IconName(Il2CppString* value) {
		return ((T (*)(CodActivityLightenUpInfoConfig*, Il2CppString*))(Il2CppBase() + 0x2D5E8DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Url() {
		return ((T (*)(CodActivityLightenUpInfoConfig*))(Il2CppBase() + 0x2D5E8E4))(this);
	}
	template <typename T = void> T set_Url(Il2CppString* value) {
		return ((T (*)(CodActivityLightenUpInfoConfig*, Il2CppString*))(Il2CppBase() + 0x2D5E8EC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CodActivityLightenUpInfoConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5E8F4))(this, bytes, position);
	}

};

}
