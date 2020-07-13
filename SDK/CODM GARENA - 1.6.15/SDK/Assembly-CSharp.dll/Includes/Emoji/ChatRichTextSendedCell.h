#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Emoji {

class ChatRichTextSendedCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Emoji", "ChatRichTextSendedCell"));
	}

	template <typename T = Il2CppVector3> T& TextHtmlOriginPosition() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRichText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Configure(uintptr_t mode, uintptr_t picInfo, int32_t row, uintptr_t mCutPanel, float contentOffset, float timeOffset) {
		return ((T (*)(ChatRichTextSendedCell*, uintptr_t, uintptr_t, int32_t, uintptr_t, float, float))(Il2CppBase() + 0x4BC8354))(this, mode, picInfo, row, mCutPanel, contentOffset, timeOffset);
	}
	template <typename T = void> T SetRichText(uintptr_t mode) {
		return ((T (*)(ChatRichTextSendedCell*, uintptr_t))(Il2CppBase() + 0x4BC850C))(this, mode);
	}
	template <typename T = void> T xLuaBaseProxy_Configure(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3, float P4, float P5) {
		return ((T (*)(ChatRichTextSendedCell*, uintptr_t, uintptr_t, int32_t, uintptr_t, float, float))(Il2CppBase() + 0x4BC8864))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T xLuaBaseProxy_SetRichText(uintptr_t P0) {
		return ((T (*)(ChatRichTextSendedCell*, uintptr_t))(Il2CppBase() + 0x4BC8894))(this, P0);
	}

};

}
