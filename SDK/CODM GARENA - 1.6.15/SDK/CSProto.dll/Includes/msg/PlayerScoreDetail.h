#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerScoreDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerScoreDetail"));
	}

	template <typename T = int32_t> T& _score_category() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _score() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_score_category() {
		return ((T (*)(PlayerScoreDetail*))(Il2CppBase() + 0x4EA9064))(this);
	}
	template <typename T = void> T set_score_category(int32_t value) {
		return ((T (*)(PlayerScoreDetail*, int32_t))(Il2CppBase() + 0x4EA906C))(this, value);
	}
	template <typename T = int32_t> T get_score() {
		return ((T (*)(PlayerScoreDetail*))(Il2CppBase() + 0x4EA9074))(this);
	}
	template <typename T = void> T set_score(int32_t value) {
		return ((T (*)(PlayerScoreDetail*, int32_t))(Il2CppBase() + 0x4EA907C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerScoreDetail*, bool))(Il2CppBase() + 0x4EA9084))(this, createIfMissing);
	}

};

}
