#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class QTFilterData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "QTFilterData"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& Applied() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Modes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsSameLanguage() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsMicrophoneRequired() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = int32_t> T& RequiredDelayLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& mTicket2Mode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& mDefaultOpenTicket() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateChatMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A1E5EC))(0);
	}
	template <typename T = bool> T ValidateChatMode(uintptr_t info) {
		return ((T (*)(QTFilterData*, uintptr_t))(Il2CppBase() + 0x3A1E748))(this, info);
	}
	template <typename T = bool> T get_Applied() {
		return ((T (*)(QTFilterData*))(Il2CppBase() + 0x3A1E86C))(this);
	}
	template <typename T = void> T set_Applied(bool value) {
		return ((T (*)(QTFilterData*, bool))(Il2CppBase() + 0x3A1E5E4))(this, value);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(QTFilterData*))(Il2CppBase() + 0x3A1E874))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(QTFilterData*, uintptr_t))(Il2CppBase() + 0x3A1E87C))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(QTFilterData*))(Il2CppBase() + 0x3A1E884))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(QTFilterData*))(Il2CppBase() + 0x3A1EBD4))(this);
	}

};

}
