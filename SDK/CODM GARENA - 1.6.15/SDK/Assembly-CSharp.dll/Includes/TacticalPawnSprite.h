#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalPawnSprite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalPawnSprite"));
	}

	template <typename T = Il2CppString*> T& Sprite0() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = Il2CppString*> T& Sprite1() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = Il2CppString*> T& Sprite2() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = Il2CppString*> T& Sprite3() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = Il2CppString*> T& Sprite4() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = Il2CppString*> T& Sprite5() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppString*> T& Sprite6() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = Il2CppString*> T& Sprite7() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Il2CppString*> T& Sprite8() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = Il2CppString*> T& Sprite9() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& numSprites() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = int32_t> T& mTeamID() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& dimensionUVs() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = float> T& numSpriteAspectRatio() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& NumColor() {
		return *(T*)((uintptr_t)this + 0x214);
	}
	template <typename T = float> T& OuterGap() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> T& InnerGap() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = int32_t> T& TeamID() {
		return *(T*)((uintptr_t)this + 0x22C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CustomTacticalFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToDrawingUV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateDrawingDimensions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitNumSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNumColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T get_NumSprite0() {
		return ((T (*)(TacticalPawnSprite*))(Il2CppBase() + 0x3F45E18))(this);
	}
	template <typename T = void> T set_NumSprite0(Il2CppString* value) {
		return ((T (*)(TacticalPawnSprite*, Il2CppString*))(Il2CppBase() + 0x3F45E20))(this, value);
	}
	template <typename T = void> T OnFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(TacticalPawnSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3F46038))(this, verts, uvs, cols);
	}
	template <typename T = void> T CustomTacticalFill(Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols, Il2CppRect outer) {
		return ((T (*)(TacticalPawnSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*, Il2CppRect))(Il2CppBase() + 0x3F46A6C))(this, verts, uvs, cols, outer);
	}
	template <typename T = uintptr_t> T ConvertToDrawingUV(Il2CppRect Outter) {
		return ((T (*)(TacticalPawnSprite*, Il2CppRect))(Il2CppBase() + 0x3F46864))(this, Outter);
	}
	template <typename T = uintptr_t> T CalculateDrawingDimensions(uintptr_t spriteData) {
		return ((T (*)(TacticalPawnSprite*, uintptr_t))(Il2CppBase() + 0x3F47604))(this, spriteData);
	}
	template <typename T = void> T InitNumSprites() {
		return ((T (*)(TacticalPawnSprite*))(Il2CppBase() + 0x3F465F8))(this);
	}
	template <typename T = void> T SetID(uint32_t ID) {
		return ((T (*)(TacticalPawnSprite*, uint32_t))(Il2CppBase() + 0x3F476DC))(this, ID);
	}
	template <typename T = void> T SetNumColor(uintptr_t color) {
		return ((T (*)(TacticalPawnSprite*, uintptr_t))(Il2CppBase() + 0x3F47784))(this, color);
	}
	template <typename T = void> T xLuaBaseProxy_OnFill(Il2CppList<Il2CppVector3>* P0, Il2CppList<Il2CppVector2>* P1, Il2CppList<uintptr_t>* P2) {
		return ((T (*)(TacticalPawnSprite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3F4785C))(this, P0, P1, P2);
	}

};

}
