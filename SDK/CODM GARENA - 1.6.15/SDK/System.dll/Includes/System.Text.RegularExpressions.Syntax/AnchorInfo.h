#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class AnchorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "AnchorInfo"));
	}

	template <typename T = uintptr_t> T& expr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& str() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& width() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ignore() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_Offset() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE05DC))(this);
	}
	template <typename T = int32_t> T get_Width() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE05E4))(this);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE05EC))(this);
	}
	template <typename T = bool> T get_IsUnknownWidth() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE0604))(this);
	}
	template <typename T = bool> T get_IsComplete() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE0610))(this);
	}
	template <typename T = Il2CppString*> T get_Substring() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE0650))(this);
	}
	template <typename T = bool> T get_IgnoreCase() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE0658))(this);
	}
	template <typename T = uintptr_t> T get_Position() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE0660))(this);
	}
	template <typename T = bool> T get_IsSubstring() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE0668))(this);
	}
	template <typename T = bool> T get_IsPosition() {
		return ((T (*)(AnchorInfo*))(Il2CppBase() + 0x4AE0678))(this);
	}
	template <typename T = uintptr_t> T GetInterval(int32_t start) {
		return ((T (*)(AnchorInfo*, int32_t))(Il2CppBase() + 0x4AE0688))(this, start);
	}

};

}
