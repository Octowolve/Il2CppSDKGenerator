#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrTLV
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrTLV"));
	}

	template <typename T = int32_t> static T& TLV_MSG_MAGIC_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TLV_MSG_MIN_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_makeTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getFieldId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getTypeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getMsgSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_skipUnknownFields() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uint32_t> static T makeTag(int32_t id, uintptr_t type) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x444F300))(0, id, type);
	}
	template <typename T = uint32_t> static T getFieldId(uint32_t tagid) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x444F3D8))(0, tagid);
	}
	template <typename T = uint32_t> static T getTypeId(uint32_t tagid) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x444F4A8))(0, tagid);
	}
	template <typename T = int32_t> static T getMsgSize(Il2CppArray<uintptr_t>* buffer, int32_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x444F578))(0, buffer, size);
	}
	template <typename T = uintptr_t> static T skipUnknownFields(uintptr_t srcBuf, uintptr_t type_id) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444F754))(0, srcBuf, type_id);
	}

};

}
