#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSIventoryLevelupAttachmentRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSIventoryLevelupAttachmentRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _dst_item() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSIventoryLevelupAttachmentRes*))(Il2CppBase() + 0x51397F8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSIventoryLevelupAttachmentRes*, int32_t))(Il2CppBase() + 0x5139800))(this, value);
	}
	template <typename T = uintptr_t> T get_dst_item() {
		return ((T (*)(CSIventoryLevelupAttachmentRes*))(Il2CppBase() + 0x5139808))(this);
	}
	template <typename T = void> T set_dst_item(uintptr_t value) {
		return ((T (*)(CSIventoryLevelupAttachmentRes*, uintptr_t))(Il2CppBase() + 0x5139810))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSIventoryLevelupAttachmentRes*, bool))(Il2CppBase() + 0x5139818))(this, createIfMissing);
	}

};

}
