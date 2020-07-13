#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLoginClientInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLoginClientInfo"));
	}

	template <typename T = Il2CppString*> T& _client_version() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _system_software() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _system_hardware() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _telecomm_oper() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _network() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _width() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _hight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _density() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _channel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _uuid() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& _cpu_info() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _memory() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _gl_render() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _gl_version() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _device_id() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _build_info() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& _appsflyer_device_id() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = Il2CppString*> T get_client_version() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EEC3C))(this);
	}
	template <typename T = void> T set_client_version(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EEC44))(this, value);
	}
	template <typename T = Il2CppString*> T get_system_software() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EEC4C))(this);
	}
	template <typename T = void> T set_system_software(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EEC54))(this, value);
	}
	template <typename T = Il2CppString*> T get_system_hardware() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EEC5C))(this);
	}
	template <typename T = void> T set_system_hardware(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EEC64))(this, value);
	}
	template <typename T = Il2CppString*> T get_telecomm_oper() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EEC6C))(this);
	}
	template <typename T = void> T set_telecomm_oper(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EEC74))(this, value);
	}
	template <typename T = Il2CppString*> T get_network() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EEC7C))(this);
	}
	template <typename T = void> T set_network(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EEC84))(this, value);
	}
	template <typename T = int32_t> T get_width() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EEC8C))(this);
	}
	template <typename T = void> T set_width(int32_t value) {
		return ((T (*)(CSLoginClientInfo*, int32_t))(Il2CppBase() + 0x51EEC94))(this, value);
	}
	template <typename T = int32_t> T get_hight() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EEC9C))(this);
	}
	template <typename T = void> T set_hight(int32_t value) {
		return ((T (*)(CSLoginClientInfo*, int32_t))(Il2CppBase() + 0x51EECA4))(this, value);
	}
	template <typename T = int32_t> T get_density() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EECAC))(this);
	}
	template <typename T = void> T set_density(int32_t value) {
		return ((T (*)(CSLoginClientInfo*, int32_t))(Il2CppBase() + 0x51EECB4))(this, value);
	}
	template <typename T = int32_t> T get_channel() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EECBC))(this);
	}
	template <typename T = void> T set_channel(int32_t value) {
		return ((T (*)(CSLoginClientInfo*, int32_t))(Il2CppBase() + 0x51EECC4))(this, value);
	}
	template <typename T = Il2CppString*> T get_uuid() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EECCC))(this);
	}
	template <typename T = void> T set_uuid(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EECD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_cpu_info() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EECDC))(this);
	}
	template <typename T = void> T set_cpu_info(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EECE4))(this, value);
	}
	template <typename T = int32_t> T get_memory() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EECEC))(this);
	}
	template <typename T = void> T set_memory(int32_t value) {
		return ((T (*)(CSLoginClientInfo*, int32_t))(Il2CppBase() + 0x51EECF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_gl_render() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EECFC))(this);
	}
	template <typename T = void> T set_gl_render(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EED04))(this, value);
	}
	template <typename T = Il2CppString*> T get_gl_version() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EED0C))(this);
	}
	template <typename T = void> T set_gl_version(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EED14))(this, value);
	}
	template <typename T = Il2CppString*> T get_device_id() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EED1C))(this);
	}
	template <typename T = void> T set_device_id(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EED24))(this, value);
	}
	template <typename T = Il2CppString*> T get_build_info() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EED2C))(this);
	}
	template <typename T = void> T set_build_info(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EED34))(this, value);
	}
	template <typename T = Il2CppString*> T get_appsflyer_device_id() {
		return ((T (*)(CSLoginClientInfo*))(Il2CppBase() + 0x51EED3C))(this);
	}
	template <typename T = void> T set_appsflyer_device_id(Il2CppString* value) {
		return ((T (*)(CSLoginClientInfo*, Il2CppString*))(Il2CppBase() + 0x51EED44))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLoginClientInfo*, bool))(Il2CppBase() + 0x51EED4C))(this, createIfMissing);
	}

};

}
