#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterFetchRecordReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterFetchRecordReq"));
	}

	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _difficult() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _is_only_simple() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_level() {
		return ((T (*)(CSChapterFetchRecordReq*))(Il2CppBase() + 0x51CF74C))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(CSChapterFetchRecordReq*, int32_t))(Il2CppBase() + 0x51CF754))(this, value);
	}
	template <typename T = int32_t> T get_difficult() {
		return ((T (*)(CSChapterFetchRecordReq*))(Il2CppBase() + 0x51CF75C))(this);
	}
	template <typename T = void> T set_difficult(int32_t value) {
		return ((T (*)(CSChapterFetchRecordReq*, int32_t))(Il2CppBase() + 0x51CF764))(this, value);
	}
	template <typename T = bool> T get_is_only_simple() {
		return ((T (*)(CSChapterFetchRecordReq*))(Il2CppBase() + 0x51CF76C))(this);
	}
	template <typename T = void> T set_is_only_simple(bool value) {
		return ((T (*)(CSChapterFetchRecordReq*, bool))(Il2CppBase() + 0x51CF774))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterFetchRecordReq*, bool))(Il2CppBase() + 0x51CF77C))(this, createIfMissing);
	}

};

}
