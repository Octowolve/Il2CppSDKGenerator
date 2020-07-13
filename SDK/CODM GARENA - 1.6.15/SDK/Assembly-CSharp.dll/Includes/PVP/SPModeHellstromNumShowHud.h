#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class SPModeHellstromNumShowHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "SPModeHellstromNumShowHud"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_Sprites() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& m_OffsetLocalPos() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& m_SpriteName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& m_Deactive_SpriteName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(SPModeHellstromNumShowHud*, Il2CppString*))(Il2CppBase() + 0x2B2085C))(this, value);
	}
	template <typename T = void> T set_DeactiveSpriteName(Il2CppString* value) {
		return ((T (*)(SPModeHellstromNumShowHud*, Il2CppString*))(Il2CppBase() + 0x2B20864))(this, value);
	}
	template <typename T = void> T UpdateNum(int32_t num) {
		return ((T (*)(SPModeHellstromNumShowHud*, int32_t))(Il2CppBase() + 0x2B2086C))(this, num);
	}

};

}
