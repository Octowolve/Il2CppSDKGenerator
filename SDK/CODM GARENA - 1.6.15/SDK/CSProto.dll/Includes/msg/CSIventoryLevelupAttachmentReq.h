#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSIventoryLevelupAttachmentReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSIventoryLevelupAttachmentReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _src_items() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _dst_item() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_src_items() {
		return ((T (*)(CSIventoryLevelupAttachmentReq*))(Il2CppBase() + 0x51397C4))(this);
	}
	template <typename T = uintptr_t> T get_dst_item() {
		return ((T (*)(CSIventoryLevelupAttachmentReq*))(Il2CppBase() + 0x51397CC))(this);
	}
	template <typename T = void> T set_dst_item(uintptr_t value) {
		return ((T (*)(CSIventoryLevelupAttachmentReq*, uintptr_t))(Il2CppBase() + 0x51397D4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSIventoryLevelupAttachmentReq*, bool))(Il2CppBase() + 0x51397DC))(this, createIfMissing);
	}

};

}
