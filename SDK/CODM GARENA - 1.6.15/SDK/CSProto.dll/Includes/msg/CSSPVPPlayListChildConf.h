#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSPVPPlayListChildConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSPVPPlayListChildConf"));
	}

	template <typename T = uint32_t> T& _PlayListID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _MapID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _OpenType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _ShowPirority() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _start_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _cd_active_second() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _cool_down_second() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _random_weight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowStartTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowEndTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _show_start_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _show_end_time() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _MaxMatchTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _RoundTarget() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _RoundTimeLimit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _open_time() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _must_download() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uint32_t> T get_PlayListID() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2954))(this);
	}
	template <typename T = void> T set_PlayListID(uint32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, uint32_t))(Il2CppBase() + 0x51E295C))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2964))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, uint32_t))(Il2CppBase() + 0x51E296C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MapID() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2974))(this);
	}
	template <typename T = void> T set_MapID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSSPVPPlayListChildConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E297C))(this, value);
	}
	template <typename T = int32_t> T get_OpenType() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2984))(this);
	}
	template <typename T = void> T set_OpenType(int32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, int32_t))(Il2CppBase() + 0x51E298C))(this, value);
	}
	template <typename T = int32_t> T get_ShowPirority() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2994))(this);
	}
	template <typename T = void> T set_ShowPirority(int32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, int32_t))(Il2CppBase() + 0x51E299C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_StartTime() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E29A4))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSSPVPPlayListChildConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E29AC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EndTime() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E29B4))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSSPVPPlayListChildConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E29BC))(this, value);
	}
	template <typename T = uint32_t> T get_start_time() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E29C4))(this);
	}
	template <typename T = void> T set_start_time(uint32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, uint32_t))(Il2CppBase() + 0x51E29CC))(this, value);
	}
	template <typename T = uint32_t> T get_end_time() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E29D4))(this);
	}
	template <typename T = void> T set_end_time(uint32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, uint32_t))(Il2CppBase() + 0x51E29DC))(this, value);
	}
	template <typename T = uint32_t> T get_cd_active_second() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E29E4))(this);
	}
	template <typename T = void> T set_cd_active_second(uint32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, uint32_t))(Il2CppBase() + 0x51E29EC))(this, value);
	}
	template <typename T = uint32_t> T get_cool_down_second() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E29F4))(this);
	}
	template <typename T = void> T set_cool_down_second(uint32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, uint32_t))(Il2CppBase() + 0x51E29FC))(this, value);
	}
	template <typename T = uint32_t> T get_random_weight() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A04))(this);
	}
	template <typename T = void> T set_random_weight(uint32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, uint32_t))(Il2CppBase() + 0x51E2A0C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowStartTime() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A14))(this);
	}
	template <typename T = void> T set_ShowStartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSSPVPPlayListChildConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E2A1C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowEndTime() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A24))(this);
	}
	template <typename T = void> T set_ShowEndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSSPVPPlayListChildConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E2A2C))(this, value);
	}
	template <typename T = uint32_t> T get_show_start_time() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A34))(this);
	}
	template <typename T = void> T set_show_start_time(uint32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, uint32_t))(Il2CppBase() + 0x51E2A3C))(this, value);
	}
	template <typename T = uint32_t> T get_show_end_time() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A44))(this);
	}
	template <typename T = void> T set_show_end_time(uint32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, uint32_t))(Il2CppBase() + 0x51E2A4C))(this, value);
	}
	template <typename T = int32_t> T get_MaxMatchTime() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A54))(this);
	}
	template <typename T = void> T set_MaxMatchTime(int32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, int32_t))(Il2CppBase() + 0x51E2A5C))(this, value);
	}
	template <typename T = int32_t> T get_RoundTarget() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A64))(this);
	}
	template <typename T = void> T set_RoundTarget(int32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, int32_t))(Il2CppBase() + 0x51E2A6C))(this, value);
	}
	template <typename T = int32_t> T get_RoundTimeLimit() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A74))(this);
	}
	template <typename T = void> T set_RoundTimeLimit(int32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, int32_t))(Il2CppBase() + 0x51E2A7C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_open_time() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A84))(this);
	}
	template <typename T = int32_t> T get_must_download() {
		return ((T (*)(CSSPVPPlayListChildConf*))(Il2CppBase() + 0x51E2A8C))(this);
	}
	template <typename T = void> T set_must_download(int32_t value) {
		return ((T (*)(CSSPVPPlayListChildConf*, int32_t))(Il2CppBase() + 0x51E2A94))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSPVPPlayListChildConf*, bool))(Il2CppBase() + 0x51E2A9C))(this, createIfMissing);
	}

};

}
