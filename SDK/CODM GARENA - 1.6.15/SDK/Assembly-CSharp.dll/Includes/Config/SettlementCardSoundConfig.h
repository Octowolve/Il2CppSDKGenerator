#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SettlementCardSoundConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SettlementCardSoundConfig"));
	}

	template <typename T = int32_t> T& Quality() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Card_audio_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Box_audio_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Bank() {
		return *(T*)((uintptr_t)this + 0x18);
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
		return ((T (*)(SettlementCardSoundConfig*))(Il2CppBase() + 0x30DF39C))(this);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(SettlementCardSoundConfig*))(Il2CppBase() + 0x30DF43C))(this);
	}
	template <typename T = void> T set_Quality(int32_t value) {
		return ((T (*)(SettlementCardSoundConfig*, int32_t))(Il2CppBase() + 0x30DF444))(this, value);
	}
	template <typename T = Il2CppString*> T get_Card_audio_name() {
		return ((T (*)(SettlementCardSoundConfig*))(Il2CppBase() + 0x30DF44C))(this);
	}
	template <typename T = void> T set_Card_audio_name(Il2CppString* value) {
		return ((T (*)(SettlementCardSoundConfig*, Il2CppString*))(Il2CppBase() + 0x30DF454))(this, value);
	}
	template <typename T = Il2CppString*> T get_Box_audio_name() {
		return ((T (*)(SettlementCardSoundConfig*))(Il2CppBase() + 0x30DF45C))(this);
	}
	template <typename T = void> T set_Box_audio_name(Il2CppString* value) {
		return ((T (*)(SettlementCardSoundConfig*, Il2CppString*))(Il2CppBase() + 0x30DF464))(this, value);
	}
	template <typename T = int32_t> T get_Bank() {
		return ((T (*)(SettlementCardSoundConfig*))(Il2CppBase() + 0x30DF46C))(this);
	}
	template <typename T = void> T set_Bank(int32_t value) {
		return ((T (*)(SettlementCardSoundConfig*, int32_t))(Il2CppBase() + 0x30DF474))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SettlementCardSoundConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DF47C))(this, bytes, position);
	}

};

}
