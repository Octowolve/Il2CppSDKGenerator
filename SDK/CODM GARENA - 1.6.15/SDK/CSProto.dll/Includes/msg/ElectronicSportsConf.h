#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ElectronicSportsConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ElectronicSportsConf"));
	}

	template <typename T = uint32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _web_url() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _img_local_resource() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _img_cdn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _country_code() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _mode_category() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _ustart_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _uend_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _loc_firstlinedesc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _loc_secondlinedesc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _count_downs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _count_down_bgboard() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uint32_t> T get_index() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B0C))(this);
	}
	template <typename T = void> T set_index(uint32_t value) {
		return ((T (*)(ElectronicSportsConf*, uint32_t))(Il2CppBase() + 0x5226B14))(this, value);
	}
	template <typename T = Il2CppString*> T get_web_url() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B1C))(this);
	}
	template <typename T = void> T set_web_url(Il2CppString* value) {
		return ((T (*)(ElectronicSportsConf*, Il2CppString*))(Il2CppBase() + 0x5226B24))(this, value);
	}
	template <typename T = Il2CppString*> T get_img_local_resource() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B2C))(this);
	}
	template <typename T = void> T set_img_local_resource(Il2CppString* value) {
		return ((T (*)(ElectronicSportsConf*, Il2CppString*))(Il2CppBase() + 0x5226B34))(this, value);
	}
	template <typename T = Il2CppString*> T get_img_cdn() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B3C))(this);
	}
	template <typename T = void> T set_img_cdn(Il2CppString* value) {
		return ((T (*)(ElectronicSportsConf*, Il2CppString*))(Il2CppBase() + 0x5226B44))(this, value);
	}
	template <typename T = Il2CppString*> T get_country_code() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B4C))(this);
	}
	template <typename T = void> T set_country_code(Il2CppString* value) {
		return ((T (*)(ElectronicSportsConf*, Il2CppString*))(Il2CppBase() + 0x5226B54))(this, value);
	}
	template <typename T = uint32_t> T get_mode_category() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B5C))(this);
	}
	template <typename T = void> T set_mode_category(uint32_t value) {
		return ((T (*)(ElectronicSportsConf*, uint32_t))(Il2CppBase() + 0x5226B64))(this, value);
	}
	template <typename T = uint32_t> T get_ustart_time() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B6C))(this);
	}
	template <typename T = void> T set_ustart_time(uint32_t value) {
		return ((T (*)(ElectronicSportsConf*, uint32_t))(Il2CppBase() + 0x5226B74))(this, value);
	}
	template <typename T = uint32_t> T get_uend_time() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B7C))(this);
	}
	template <typename T = void> T set_uend_time(uint32_t value) {
		return ((T (*)(ElectronicSportsConf*, uint32_t))(Il2CppBase() + 0x5226B84))(this, value);
	}
	template <typename T = Il2CppString*> T get_loc_firstlinedesc() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B8C))(this);
	}
	template <typename T = void> T set_loc_firstlinedesc(Il2CppString* value) {
		return ((T (*)(ElectronicSportsConf*, Il2CppString*))(Il2CppBase() + 0x5226B94))(this, value);
	}
	template <typename T = Il2CppString*> T get_loc_secondlinedesc() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226B9C))(this);
	}
	template <typename T = void> T set_loc_secondlinedesc(Il2CppString* value) {
		return ((T (*)(ElectronicSportsConf*, Il2CppString*))(Il2CppBase() + 0x5226BA4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_count_downs() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226BAC))(this);
	}
	template <typename T = int32_t> T get_count_down_bgboard() {
		return ((T (*)(ElectronicSportsConf*))(Il2CppBase() + 0x5226BB4))(this);
	}
	template <typename T = void> T set_count_down_bgboard(int32_t value) {
		return ((T (*)(ElectronicSportsConf*, int32_t))(Il2CppBase() + 0x5226BBC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ElectronicSportsConf*, bool))(Il2CppBase() + 0x5226BC4))(this, createIfMissing);
	}

};

}
