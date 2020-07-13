#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoxLotteryStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoxLotteryStatis"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _box_record_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_box_record_list() {
		return ((T (*)(LuckyBoxLotteryStatis*))(Il2CppBase() + 0x4EA3D84))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoxLotteryStatis*, bool))(Il2CppBase() + 0x4EA3D8C))(this, createIfMissing);
	}

};

}
