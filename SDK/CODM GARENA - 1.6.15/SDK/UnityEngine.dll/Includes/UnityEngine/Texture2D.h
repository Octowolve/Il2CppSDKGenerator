#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Texture2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Texture2D"));
	}


	template <typename T = int32_t> T get_mipmapCount() {
		return ((T (*)(Texture2D*))(Il2CppBase() + 0x4D32BC4))(this);
	}
	template <typename T = void> static T Internal_Create(uintptr_t mono, int32_t width, int32_t height, uintptr_t format, bool mipmap, bool linear, uintptr_t nativeTex) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x4D3291C))(0, mono, width, height, format, mipmap, linear, nativeTex);
	}
	template <typename T = uintptr_t> static T CreateExternalTexture(int32_t width, int32_t height, uintptr_t format, bool mipmap, bool linear, uintptr_t nativeTex) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x4D32C5C))(0, width, height, format, mipmap, linear, nativeTex);
	}
	template <typename T = void> T UpdateExternalTexture(uintptr_t nativeTex) {
		return ((T (*)(Texture2D*, uintptr_t))(Il2CppBase() + 0x4D32D40))(this, nativeTex);
	}
	template <typename T = uintptr_t> T get_format() {
		return ((T (*)(Texture2D*))(Il2CppBase() + 0x4D32DE0))(this);
	}
	template <typename T = uintptr_t> static T get_whiteTexture() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D32E78))(0);
	}
	template <typename T = uintptr_t> static T get_blackTexture() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D32F08))(0);
	}
	template <typename T = void> T SetPixel(int32_t x, int32_t y, uintptr_t color) {
		return ((T (*)(Texture2D*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4D32F98))(this, x, y, color);
	}
	template <typename T = void> static T INTERNAL_CALL_SetPixel(uintptr_t self, int32_t x, int32_t y, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4D32FE4))(0, self, x, y, color);
	}
	template <typename T = uintptr_t> T GetPixel(int32_t x, int32_t y) {
		return ((T (*)(Texture2D*, int32_t, int32_t))(Il2CppBase() + 0x4D33094))(this, x, y);
	}
	template <typename T = void> static T INTERNAL_CALL_GetPixel(uintptr_t self, int32_t x, int32_t y, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4D330C8))(0, self, x, y, value);
	}
	template <typename T = uintptr_t> T GetPixelBilinear(float u, float v) {
		return ((T (*)(Texture2D*, float, float))(Il2CppBase() + 0x4D33178))(this, u, v);
	}
	template <typename T = void> static T INTERNAL_CALL_GetPixelBilinear(uintptr_t self, float u, float v, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, float, float, uintptr_t*))(Il2CppBase() + 0x4D331AC))(0, self, u, v, value);
	}
	template <typename T = void> T SetPixels(Il2CppArray<uintptr_t>* colors) {
		return ((T (*)(Texture2D*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D3325C))(this, colors);
	}
	template <typename T = void> T SetPixels_1(Il2CppArray<uintptr_t>* colors, int32_t miplevel) {
		return ((T (*)(Texture2D*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D33264))(this, colors, miplevel);
	}
	template <typename T = void> T SetPixels_2(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, Il2CppArray<uintptr_t>* colors, int32_t miplevel) {
		return ((T (*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D332E4))(this, x, y, blockWidth, blockHeight, colors, miplevel);
	}
	template <typename T = void> T SetAllPixels32(Il2CppArray<uintptr_t>* colors, int32_t miplevel) {
		return ((T (*)(Texture2D*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D33394))(this, colors, miplevel);
	}
	template <typename T = void> T SetBlockOfPixels32(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, Il2CppArray<uintptr_t>* colors, int32_t miplevel) {
		return ((T (*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D3343C))(this, x, y, blockWidth, blockHeight, colors, miplevel);
	}
	template <typename T = void> T SetPixels32(Il2CppArray<uintptr_t>* colors) {
		return ((T (*)(Texture2D*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D334EC))(this, colors);
	}
	template <typename T = void> T SetPixels32_1(Il2CppArray<uintptr_t>* colors, int32_t miplevel) {
		return ((T (*)(Texture2D*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D334F4))(this, colors, miplevel);
	}
	template <typename T = void> T SetPixels32_2(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, Il2CppArray<uintptr_t>* colors, int32_t miplevel) {
		return ((T (*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D334F8))(this, x, y, blockWidth, blockHeight, colors, miplevel);
	}
	template <typename T = bool> T LoadImage(Il2CppArray<uintptr_t>* data, bool markNonReadable) {
		return ((T (*)(Texture2D*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4D33524))(this, data, markNonReadable);
	}
	template <typename T = bool> T LoadImage_1(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(Texture2D*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4D335CC))(this, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPixels() {
		return ((T (*)(Texture2D*))(Il2CppBase() + 0x4D335D4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPixels_1(int32_t miplevel) {
		return ((T (*)(Texture2D*, int32_t))(Il2CppBase() + 0x4D335DC))(this, miplevel);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPixels_2(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, int32_t miplevel) {
		return ((T (*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4D33654))(this, x, y, blockWidth, blockHeight, miplevel);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPixels32(int32_t miplevel) {
		return ((T (*)(Texture2D*, int32_t))(Il2CppBase() + 0x4D33704))(this, miplevel);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPixels32_1() {
		return ((T (*)(Texture2D*))(Il2CppBase() + 0x4D337A4))(this);
	}
	template <typename T = void> T Apply(bool updateMipmaps, bool makeNoLongerReadable) {
		return ((T (*)(Texture2D*, bool, bool))(Il2CppBase() + 0x4D337AC))(this, updateMipmaps, makeNoLongerReadable);
	}
	template <typename T = void> T Apply_1() {
		return ((T (*)(Texture2D*))(Il2CppBase() + 0x4D33854))(this);
	}
	template <typename T = void> T ApplyRect(int32_t x, int32_t y, int32_t width, int32_t height, bool updateMipmaps, bool makeNoLongerReadable) {
		return ((T (*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x4D33860))(this, x, y, width, height, updateMipmaps, makeNoLongerReadable);
	}
	template <typename T = void> T ApplyRect_1(int32_t x, int32_t y, int32_t width, int32_t height, bool updateMipmaps) {
		return ((T (*)(Texture2D*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x4D33934))(this, x, y, width, height, updateMipmaps);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T PackTextures(Il2CppArray<uintptr_t>* textures, int32_t padding, int32_t maximumAtlasSize, bool makeNoLongerReadable, bool squareAtlas) {
		return ((T (*)(Texture2D*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x4D33960))(this, textures, padding, maximumAtlasSize, makeNoLongerReadable, squareAtlas);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T PackTextures_1(Il2CppArray<uintptr_t>* textures, int32_t padding) {
		return ((T (*)(Texture2D*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D33A28))(this, textures, padding);
	}
	template <typename T = void> T ReadPixels(Il2CppRect source, int32_t destX, int32_t destY, bool recalculateMipMaps) {
		return ((T (*)(Texture2D*, Il2CppRect, int32_t, int32_t, bool))(Il2CppBase() + 0x4D33A50))(this, source, destX, destY, recalculateMipMaps);
	}
	template <typename T = void> T ReadPixels_1(Il2CppRect source, int32_t destX, int32_t destY) {
		return ((T (*)(Texture2D*, Il2CppRect, int32_t, int32_t))(Il2CppBase() + 0x4D33B50))(this, source, destX, destY);
	}
	template <typename T = void> static T INTERNAL_CALL_ReadPixels(uintptr_t self, uintptr_t source, int32_t destX, int32_t destY, bool recalculateMipMaps) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x4D33A98))(0, self, source, destX, destY, recalculateMipMaps);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncodeToPNG() {
		return ((T (*)(Texture2D*))(Il2CppBase() + 0x4D33B90))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncodeToJPG(int32_t quality) {
		return ((T (*)(Texture2D*, int32_t))(Il2CppBase() + 0x4D33C28))(this, quality);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncodeToJPG_1() {
		return ((T (*)(Texture2D*))(Il2CppBase() + 0x4D33CC8))(this);
	}

};

}
