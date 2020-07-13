#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PersonalInfo {

class BreakModeGameRecordUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PersonalInfo", "BreakModeGameRecordUIView"));
	}

	template <typename T = uintptr_t> T& m_EasyModeNameLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_EasyModeChapterLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_EasyModeStarCountLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_HardModeNameLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_HardModeChapterLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_HardModeStarCountLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_HellModeNameLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_HellModeChapterLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_HellModeStarCountLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_CloseButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}

	template <typename T = void> T SetEasyModeData(Il2CppString* chapter, Il2CppString* starcount) {
		return ((T (*)(BreakModeGameRecordUIView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3F07EA8))(this, chapter, starcount);
	}
	template <typename T = void> T SetHardModeData(Il2CppString* chapter, Il2CppString* starcount) {
		return ((T (*)(BreakModeGameRecordUIView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3F07EF4))(this, chapter, starcount);
	}
	template <typename T = void> T SetHellModeData(Il2CppString* chapter, Il2CppString* starcount) {
		return ((T (*)(BreakModeGameRecordUIView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3F07F40))(this, chapter, starcount);
	}
	template <typename T = void> T ResetViewSize(int32_t width, int32_t height) {
		return ((T (*)(BreakModeGameRecordUIView*, int32_t, int32_t))(Il2CppBase() + 0x3F07F8C))(this, width, height);
	}

};

}
