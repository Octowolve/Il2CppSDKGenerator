#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class DeviceChunkCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "DeviceChunkCollection"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& fontStack() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& colorStack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& alignStack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& valignStack() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& Links() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAcquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AcquireDeviceChunkDrawText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AcquireDeviceChunkDrawTextEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Parse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExctractAligns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnAcquire() {
		return ((T (*)(DeviceChunkCollection*))(Il2CppBase() + 0x4757A88))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(DeviceChunkCollection*))(Il2CppBase() + 0x4757B20))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Lines() {
		return ((T (*)(DeviceChunkCollection*))(Il2CppBase() + 0x4757EAC))(this);
	}
	template <typename T = void> T Clear(bool releaseItems) {
		return ((T (*)(DeviceChunkCollection*, bool))(Il2CppBase() + 0x4757BC8))(this, releaseItems);
	}
	template <typename T = uintptr_t> T AcquireDeviceChunkDrawText(Il2CppString* id, Il2CppString* text, uintptr_t font, uintptr_t color, uintptr_t deco, bool decoStop, bool prevIsWord) {
		return ((T (*)(DeviceChunkCollection*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x4757F68))(this, id, text, font, color, deco, decoStop, prevIsWord);
	}
	template <typename T = uintptr_t> T AcquireDeviceChunkDrawTextEffect(Il2CppString* id, Il2CppString* text, uintptr_t font, uintptr_t color, uintptr_t deco, bool decoStop, uintptr_t effect, int32_t effectAmount, uintptr_t effectColor, bool prevIsWord) {
		return ((T (*)(DeviceChunkCollection*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x47581DC))(this, id, text, font, color, deco, decoStop, effect, effectAmount, effectColor, prevIsWord);
	}
	template <typename T = void> T Parse(void* htmlChunks, int32_t viewportWidth, Il2CppString* id, uintptr_t font, uintptr_t color, uintptr_t align, uintptr_t valign) {
		return ((T (*)(DeviceChunkCollection*, void*, int32_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47584B0))(this, htmlChunks, viewportWidth, id, font, color, align, valign);
	}
	template <typename T = void> static T ExctractAligns(uintptr_t tag, uintptr_t align, uintptr_t valign) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x475B0E4))(0, tag, align, valign);
	}
	template <typename T = uintptr_t> T NewLine(uintptr_t prevLine, int32_t viewPortWidth, uintptr_t prevAlign, uintptr_t prevVAlign) {
		return ((T (*)(DeviceChunkCollection*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x475A940))(this, prevLine, viewPortWidth, prevAlign, prevVAlign);
	}
	template <typename T = void> T FinishLine(uintptr_t line, uintptr_t align, uintptr_t valign) {
		return ((T (*)(DeviceChunkCollection*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x475ADF0))(this, line, align, valign);
	}

};

}
