#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SPVPPlayListChildConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SPVPPlayListChildConfConfig"));
	}

	template <typename T = int32_t> T& PlayListID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& MapID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MapDesc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PlaylistName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MaxMatchTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& RoundTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& RoundTimeLimit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& OpenType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& Cd_active_second() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& Cool_down_second() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& Random_weight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Must_download() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_PlayListID() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA784))(this);
	}
	template <typename T = void> T set_PlayListID(int32_t value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, int32_t))(Il2CppBase() + 0x30EA78C))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapID() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA794))(this);
	}
	template <typename T = void> T set_MapID(Il2CppString* value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EA79C))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapDesc() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA7A4))(this);
	}
	template <typename T = void> T set_MapDesc(Il2CppString* value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EA7AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlaylistName() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA7B4))(this);
	}
	template <typename T = void> T set_PlaylistName(Il2CppString* value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EA7BC))(this, value);
	}
	template <typename T = int32_t> T get_MaxMatchTime() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA7C4))(this);
	}
	template <typename T = void> T set_MaxMatchTime(int32_t value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, int32_t))(Il2CppBase() + 0x30EA7CC))(this, value);
	}
	template <typename T = int32_t> T get_RoundTarget() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA7D4))(this);
	}
	template <typename T = void> T set_RoundTarget(int32_t value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, int32_t))(Il2CppBase() + 0x30EA7DC))(this, value);
	}
	template <typename T = int32_t> T get_RoundTimeLimit() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA7E4))(this);
	}
	template <typename T = void> T set_RoundTimeLimit(int32_t value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, int32_t))(Il2CppBase() + 0x30EA7EC))(this, value);
	}
	template <typename T = int32_t> T get_OpenType() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA7F4))(this);
	}
	template <typename T = void> T set_OpenType(int32_t value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, int32_t))(Il2CppBase() + 0x30EA7FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_StartTime() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA804))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppString* value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EA80C))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA814))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EA81C))(this, value);
	}
	template <typename T = uint32_t> T get_Cd_active_second() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA824))(this);
	}
	template <typename T = void> T set_Cd_active_second(uint32_t value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, uint32_t))(Il2CppBase() + 0x30EA82C))(this, value);
	}
	template <typename T = uint32_t> T get_Cool_down_second() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA834))(this);
	}
	template <typename T = void> T set_Cool_down_second(uint32_t value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, uint32_t))(Il2CppBase() + 0x30EA83C))(this, value);
	}
	template <typename T = uint32_t> T get_Random_weight() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA844))(this);
	}
	template <typename T = void> T set_Random_weight(uint32_t value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, uint32_t))(Il2CppBase() + 0x30EA84C))(this, value);
	}
	template <typename T = int32_t> T get_Must_download() {
		return ((T (*)(SPVPPlayListChildConfConfig*))(Il2CppBase() + 0x30EA854))(this);
	}
	template <typename T = void> T set_Must_download(int32_t value) {
		return ((T (*)(SPVPPlayListChildConfConfig*, int32_t))(Il2CppBase() + 0x30EA85C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SPVPPlayListChildConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EA864))(this, bytes, position);
	}

};

}
