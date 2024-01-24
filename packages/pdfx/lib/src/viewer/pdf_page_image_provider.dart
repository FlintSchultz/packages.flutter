// ignore: unnecessary_import
import 'package:flutter/foundation.dart';
import 'package:flutter/widgets.dart';
import 'package:pdfx/src/renderer/interfaces/page.dart';

class PdfPageImageProvider extends ImageProvider<PdfPageImageProvider> {
  const PdfPageImageProvider(
    this.pdfPageImage,
    this.pageNumber,
    this.documentId, {
    this.scale = 1.0,
  });

  final Future<PdfPageImage> pdfPageImage;
  final int pageNumber;
  final String documentId;

  final double scale;

  @override
  Future<PdfPageImageProvider> obtainKey(ImageConfiguration configuration) =>
      SynchronousFuture<PdfPageImageProvider>(this);

  @override
  bool operator ==(Object other) {
    if (other.runtimeType != runtimeType) {
      return false;
    }
    if (other is PdfPageImageProvider &&
        pageNumber == other.pageNumber &&
        documentId == other.documentId &&
        scale == other.scale) {
      return true;
    }
    return false;
  }

  @override
  int get hashCode => Object.hash(pageNumber, documentId, scale);
}
