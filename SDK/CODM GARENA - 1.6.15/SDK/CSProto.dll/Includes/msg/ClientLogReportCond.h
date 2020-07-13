#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ClientLogReportCond
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ClientLogReportCond"));
	}

	template <typename T = uint32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _upload_flag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _begin_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _logfile_size() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _upload_url() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_type() {
		return ((T (*)(ClientLogReportCond*))(Il2CppBase() + 0x516E928))(this);
	}
	template <typename T = void> T set_type(uint32_t value) {
		return ((T (*)(ClientLogReportCond*, uint32_t))(Il2CppBase() + 0x516E930))(this, value);
	}
	template <typename T = uint32_t> T get_upload_flag() {
		return ((T (*)(ClientLogReportCond*))(Il2CppBase() + 0x516E938))(this);
	}
	template <typename T = void> T set_upload_flag(uint32_t value) {
		return ((T (*)(ClientLogReportCond*, uint32_t))(Il2CppBase() + 0x516E940))(this, value);
	}
	template <typename T = uint32_t> T get_begin_time() {
		return ((T (*)(ClientLogReportCond*))(Il2CppBase() + 0x516E948))(this);
	}
	template <typename T = void> T set_begin_time(uint32_t value) {
		return ((T (*)(ClientLogReportCond*, uint32_t))(Il2CppBase() + 0x516E950))(this, value);
	}
	template <typename T = uint32_t> T get_end_time() {
		return ((T (*)(ClientLogReportCond*))(Il2CppBase() + 0x516E958))(this);
	}
	template <typename T = void> T set_end_time(uint32_t value) {
		return ((T (*)(ClientLogReportCond*, uint32_t))(Il2CppBase() + 0x516E960))(this, value);
	}
	template <typename T = uint32_t> T get_logfile_size() {
		return ((T (*)(ClientLogReportCond*))(Il2CppBase() + 0x516E968))(this);
	}
	template <typename T = void> T set_logfile_size(uint32_t value) {
		return ((T (*)(ClientLogReportCond*, uint32_t))(Il2CppBase() + 0x516E970))(this, value);
	}
	template <typename T = Il2CppString*> T get_upload_url() {
		return ((T (*)(ClientLogReportCond*))(Il2CppBase() + 0x516E978))(this);
	}
	template <typename T = void> T set_upload_url(Il2CppString* value) {
		return ((T (*)(ClientLogReportCond*, Il2CppString*))(Il2CppBase() + 0x516E980))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ClientLogReportCond*, bool))(Il2CppBase() + 0x516E988))(this, createIfMissing);
	}

};

}
