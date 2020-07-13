#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetNewbieGuideReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountSetNewbieGuide_Req"));
	}

	template <typename T = Il2CppList<int32_t>*> T& _newbie_guide_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _complete_task_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _is_cover() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppList<int32_t>*> T get_newbie_guide_list() {
		return ((T (*)(CSAccountSetNewbieGuideReq*))(Il2CppBase() + 0x51708C4))(this);
	}
	template <typename T = int32_t> T get_complete_task_id() {
		return ((T (*)(CSAccountSetNewbieGuideReq*))(Il2CppBase() + 0x51708CC))(this);
	}
	template <typename T = void> T set_complete_task_id(int32_t value) {
		return ((T (*)(CSAccountSetNewbieGuideReq*, int32_t))(Il2CppBase() + 0x51708D4))(this, value);
	}
	template <typename T = bool> T get_is_cover() {
		return ((T (*)(CSAccountSetNewbieGuideReq*))(Il2CppBase() + 0x51708DC))(this);
	}
	template <typename T = void> T set_is_cover(bool value) {
		return ((T (*)(CSAccountSetNewbieGuideReq*, bool))(Il2CppBase() + 0x51708E4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetNewbieGuideReq*, bool))(Il2CppBase() + 0x51708EC))(this, createIfMissing);
	}

};

}
