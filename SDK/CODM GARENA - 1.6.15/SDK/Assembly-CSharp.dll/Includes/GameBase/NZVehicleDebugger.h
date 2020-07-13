#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NZVehicleDebugger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NZVehicleDebugger"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& m_Contents() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_fixLabels() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppRect> T& m_rect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& TitleWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& KeyWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ValueWidth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFixPosText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T AddText(Il2CppString* title, Il2CppArray<uintptr_t>* content) {
		return ((T (*)(NZVehicleDebugger*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x19E1670))(this, title, content);
	}
	template <typename T = void> T AddFixPosText(Il2CppArray<uintptr_t>* keyValuePair) {
		return ((T (*)(NZVehicleDebugger*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x19E181C))(this, keyValuePair);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(NZVehicleDebugger*))(Il2CppBase() + 0x19E1A88))(this);
	}
	template <typename T = Il2CppRect> T GetRect(int32_t line, int32_t inLineIndex, bool isKey, int32_t rowCount) {
		return ((T (*)(NZVehicleDebugger*, int32_t, int32_t, bool, int32_t))(Il2CppBase() + 0x19E1B88))(this, line, inLineIndex, isKey, rowCount);
	}

};

}
