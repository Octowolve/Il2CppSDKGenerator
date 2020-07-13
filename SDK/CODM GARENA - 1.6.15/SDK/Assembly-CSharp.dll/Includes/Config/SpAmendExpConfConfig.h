#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpAmendExpConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpAmendExpConfConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& GameType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& GameTimeFactor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& GameKillAndAsistFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& CureFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& UseDogTagFactor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& BpBuffAmendValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& GameModeStrList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& GameModeAmendFactor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& NoPunishGameModeList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& PunishValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& PunishThreshold() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& MaxExp() {
		return *(T*)((uintptr_t)this + 0x3C);
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
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E2890))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E2930))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(SpAmendExpConfConfig*, int32_t))(Il2CppBase() + 0x30E2938))(this, value);
	}
	template <typename T = int32_t> T get_GameType() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E2940))(this);
	}
	template <typename T = void> T set_GameType(int32_t value) {
		return ((T (*)(SpAmendExpConfConfig*, int32_t))(Il2CppBase() + 0x30E2948))(this, value);
	}
	template <typename T = float> T get_GameTimeFactor() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E2950))(this);
	}
	template <typename T = void> T set_GameTimeFactor(float value) {
		return ((T (*)(SpAmendExpConfConfig*, float))(Il2CppBase() + 0x30E2958))(this, value);
	}
	template <typename T = float> T get_GameKillAndAsistFactor() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E2960))(this);
	}
	template <typename T = void> T set_GameKillAndAsistFactor(float value) {
		return ((T (*)(SpAmendExpConfConfig*, float))(Il2CppBase() + 0x30E2968))(this, value);
	}
	template <typename T = float> T get_CureFactor() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E2970))(this);
	}
	template <typename T = void> T set_CureFactor(float value) {
		return ((T (*)(SpAmendExpConfConfig*, float))(Il2CppBase() + 0x30E2978))(this, value);
	}
	template <typename T = float> T get_UseDogTagFactor() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E2980))(this);
	}
	template <typename T = void> T set_UseDogTagFactor(float value) {
		return ((T (*)(SpAmendExpConfConfig*, float))(Il2CppBase() + 0x30E2988))(this, value);
	}
	template <typename T = float> T get_BpBuffAmendValue() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E2990))(this);
	}
	template <typename T = void> T set_BpBuffAmendValue(float value) {
		return ((T (*)(SpAmendExpConfConfig*, float))(Il2CppBase() + 0x30E2998))(this, value);
	}
	template <typename T = Il2CppString*> T get_GameModeStrList() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E29A0))(this);
	}
	template <typename T = void> T set_GameModeStrList(Il2CppString* value) {
		return ((T (*)(SpAmendExpConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E29A8))(this, value);
	}
	template <typename T = float> T get_GameModeAmendFactor() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E29B0))(this);
	}
	template <typename T = void> T set_GameModeAmendFactor(float value) {
		return ((T (*)(SpAmendExpConfConfig*, float))(Il2CppBase() + 0x30E29B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_NoPunishGameModeList() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E29C0))(this);
	}
	template <typename T = void> T set_NoPunishGameModeList(Il2CppString* value) {
		return ((T (*)(SpAmendExpConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E29C8))(this, value);
	}
	template <typename T = float> T get_PunishValue() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E29D0))(this);
	}
	template <typename T = void> T set_PunishValue(float value) {
		return ((T (*)(SpAmendExpConfConfig*, float))(Il2CppBase() + 0x30E29D8))(this, value);
	}
	template <typename T = int32_t> T get_PunishThreshold() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E29E0))(this);
	}
	template <typename T = void> T set_PunishThreshold(int32_t value) {
		return ((T (*)(SpAmendExpConfConfig*, int32_t))(Il2CppBase() + 0x30E29E8))(this, value);
	}
	template <typename T = int32_t> T get_MaxExp() {
		return ((T (*)(SpAmendExpConfConfig*))(Il2CppBase() + 0x30E29F0))(this);
	}
	template <typename T = void> T set_MaxExp(int32_t value) {
		return ((T (*)(SpAmendExpConfConfig*, int32_t))(Il2CppBase() + 0x30E29F8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpAmendExpConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E2A00))(this, bytes, position);
	}

};

}
